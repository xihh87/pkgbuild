# PKGBUILD template

[pacman](http://www.archlinux.org/pacman/ ) is a great package manager
and makes packaging new software easy and straightforward
by using a `PKGBUILD` script to do the build.

There are some official prototypes handling different packaging cases,
and it is somehow tedious to find them and copying the relevant parts.
Some of them are also outdated.

This project aims to provide an up to date template,
containing all use cases and using just one command:

```
pkg [VCS [VCSOPTS]] [LANG] [OPTIONS]
```

Where:

```
VCS := { git | hg | bzr | svn }
VCSOPTS := { commit=COMMIT branch=BRANCH tag=TAG }
LANG := { python | perl | haskell }
OPTIONS := { -s <SOURCE_URL> | -u <PROJECT_URL> | split }
```

# Dependencies

The pkg script is a wrapper for the
[General Pre Processor](http://files.nothingisreal.com/software/gpp/gpp.html).

