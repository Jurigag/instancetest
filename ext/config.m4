PHP_ARG_ENABLE(instancetest, whether to enable instancetest, [ --enable-instancetest   Enable Instancetest])

if test "$PHP_INSTANCETEST" = "yes"; then

	

	if ! test "x" = "x"; then
		PHP_EVAL_LIBLINE(, INSTANCETEST_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_INSTANCETEST, 1, [Whether you have Instancetest])
	instancetest_sources="instancetest.c kernel/main.c kernel/memory.c kernel/exception.c kernel/hash.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/extended/array.c kernel/string.c kernel/fcall.c kernel/extended/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c instancetest/aservice.zep.c
	instancetest/bservice.zep.c
	instancetest/cservice.zep.c
	instancetest/dservice.zep.c
	instancetest/eservice.zep.c
	instancetest/exampleservice.zep.c
	instancetest/fservice.zep.c
	instancetest/gservice.zep.c
	instancetest/hservice.zep.c
	instancetest/iservice.zep.c
	instancetest/jservice.zep.c
	instancetest/kservice.zep.c
	instancetest/lservice.zep.c
	instancetest/mservice.zep.c
	instancetest/nservice.zep.c
	instancetest/oservice.zep.c "
	PHP_NEW_EXTENSION(instancetest, $instancetest_sources, $ext_shared,, )
	PHP_SUBST(INSTANCETEST_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([instancetest], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([instancetest], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/instancetest], [php_INSTANCETEST.h])

fi
