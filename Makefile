-include config.mk

all: config.mk
	install -d $(DESTDIR)/$(PREFIX)/$(PKGBUILD_DIR)
	install templates/PKGBUILD templates/PKGBUILD.inc $(DESTDIR)/$(PKGBUILD_DIR)
	install -d $(DESTDIR)/$(PREFIX)/bin
	install bin/pkg $(DESTDIR)/$(PREFIX)/bin
	sed -i "s#/usr/share/pkbuild#$(PKGBUILD_DIR)#g" $(DESTDIR)/$(PREFIX)/bin/pkg

config.mk:
	cp config.mk.example config.mk
