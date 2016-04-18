//
// VCS handling
//
#ifdef VCS
#define VCS_SUFFIX -{{VCS}}
#define VCS_NOSUFFIX %-{{VCS}}
#define VCS_PREFIX ${pkgname{{VCS_NOSUFFIX}}}::{{VCS}}+
#ifndef SOURCE_URL
#ifndef URL_SUFFIX
#define URL_SUFFIX #FRAGMENT
#endif
#else
#define URL_SUFFIX
#endif
#define PKGVER
#else
#define VCS_SUFFIX
#define VCS_NOSUFFIX
#define VCS_PREFIX
#define URL_SUFFIX
#define PKGVER -${pkgver}
#define VCS
#endif
//
// DEFAULTS
//
#define EMPTY
#ifndef LICENSE
#define LICENSE 'UNKNOWN'
#endif
#ifndef SOURCE_URL
#define SOURCE_URL URL
#endif
