
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "instancetest.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *instancetest_aservice_ce;
zend_class_entry *instancetest_bservice_ce;
zend_class_entry *instancetest_cservice_ce;
zend_class_entry *instancetest_dservice_ce;
zend_class_entry *instancetest_eservice_ce;
zend_class_entry *instancetest_exampleservice_ce;
zend_class_entry *instancetest_fservice_ce;
zend_class_entry *instancetest_gservice_ce;
zend_class_entry *instancetest_hservice_ce;
zend_class_entry *instancetest_iservice_ce;
zend_class_entry *instancetest_jservice_ce;
zend_class_entry *instancetest_kservice_ce;
zend_class_entry *instancetest_lservice_ce;
zend_class_entry *instancetest_mservice_ce;
zend_class_entry *instancetest_nservice_ce;
zend_class_entry *instancetest_oservice_ce;

ZEND_DECLARE_MODULE_GLOBALS(instancetest)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(instancetest)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(Instancetest_AService);
	ZEPHIR_INIT(Instancetest_BService);
	ZEPHIR_INIT(Instancetest_CService);
	ZEPHIR_INIT(Instancetest_DService);
	ZEPHIR_INIT(Instancetest_EService);
	ZEPHIR_INIT(Instancetest_ExampleService);
	ZEPHIR_INIT(Instancetest_FService);
	ZEPHIR_INIT(Instancetest_GService);
	ZEPHIR_INIT(Instancetest_HService);
	ZEPHIR_INIT(Instancetest_IService);
	ZEPHIR_INIT(Instancetest_JService);
	ZEPHIR_INIT(Instancetest_KService);
	ZEPHIR_INIT(Instancetest_LService);
	ZEPHIR_INIT(Instancetest_MService);
	ZEPHIR_INIT(Instancetest_NService);
	ZEPHIR_INIT(Instancetest_OService);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(instancetest)
{

	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_instancetest_globals *instancetest_globals TSRMLS_DC)
{
	instancetest_globals->initialized = 0;

	/* Memory options */
	instancetest_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	instancetest_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	instancetest_globals->cache_enabled = 1;

	/* Recursive Lock */
	instancetest_globals->recursive_lock = 0;

	/* Static cache */
	memset(instancetest_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_instancetest_globals *instancetest_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(instancetest)
{

	zend_instancetest_globals *instancetest_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(instancetest_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(instancetest_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(instancetest)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(instancetest)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_INSTANCETEST_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_INSTANCETEST_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_INSTANCETEST_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_INSTANCETEST_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_INSTANCETEST_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(instancetest)
{
	php_zephir_init_globals(instancetest_globals TSRMLS_CC);
	php_zephir_init_module_globals(instancetest_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(instancetest)
{

}


zend_function_entry php_instancetest_functions[] = {
ZEND_FE_END

};

zend_module_entry instancetest_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_INSTANCETEST_EXTNAME,
	php_instancetest_functions,
	PHP_MINIT(instancetest),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(instancetest),
#else
	NULL,
#endif
	PHP_RINIT(instancetest),
	PHP_RSHUTDOWN(instancetest),
	PHP_MINFO(instancetest),
	PHP_INSTANCETEST_VERSION,
	ZEND_MODULE_GLOBALS(instancetest),
	PHP_GINIT(instancetest),
	PHP_GSHUTDOWN(instancetest),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_INSTANCETEST
ZEND_GET_MODULE(instancetest)
#endif
