# dshortcuts - dynamic menu one key to select
# See LICENSE file for copyright and license details.

include config.mk

SRC = drw.c dshortcuts.c stest.c util.c
OBJ = $(SRC:.c=.o)

all: options dshortcuts stest

LDFLAGS  = -L/usr/X11R6/lib -lX11 -lXinerama -lfontconfig -lXft -lXext

options:
	@echo dshortcuts build options:
	@echo "CFLAGS   = $(CFLAGS)"
	@echo "LDFLAGS  = $(LDFLAGS)"
	@echo "CC       = $(CC)"

.c.o:
	$(CC) -c $(CFLAGS) $<

config.h:
	cp config.def.h $@

$(OBJ): arg.h config.h config.mk drw.h

dshortcuts: dshortcuts.o drw.o util.o
	$(CC) -o $@ dshortcuts.o drw.o util.o $(LDFLAGS)

stest: stest.o
	$(CC) -o $@ stest.o $(LDFLAGS)

clean:
	rm -f dshortcuts stest $(OBJ) dshortcuts-$(VERSION).tar.gz

dist: clean
	mkdir -p dshortcuts-$(VERSION)
	cp LICENSE Makefile README arg.h config.def.h config.mk dshortcuts.1\
		drw.h util.h stest.1 $(SRC)\
		dshortcuts-$(VERSION)
	tar -cf dshortcuts-$(VERSION).tar dshortcuts-$(VERSION)
	gzip dshortcuts-$(VERSION).tar
	rm -rf dshortcuts-$(VERSION)

install: all
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f dshortcuts stest $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dshortcuts
	chmod 755 $(DESTDIR)$(PREFIX)/bin/stest
	mkdir -p $(DESTDIR)$(MANPREFIX)/man1
	sed "s/VERSION/$(VERSION)/g" < dshortcuts.1 > $(DESTDIR)$(MANPREFIX)/man1/dshortcuts.1
	sed "s/VERSION/$(VERSION)/g" < stest.1 > $(DESTDIR)$(MANPREFIX)/man1/stest.1
	chmod 644 $(DESTDIR)$(MANPREFIX)/man1/dshortcuts.1
	chmod 644 $(DESTDIR)$(MANPREFIX)/man1/stest.1

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dshortcuts\
		$(DESTDIR)$(PREFIX)/bin/stest\
		$(DESTDIR)$(MANPREFIX)/man1/dshortcuts.1\
		$(DESTDIR)$(MANPREFIX)/man1/stest.1

.PHONY: all options clean dist install uninstall
