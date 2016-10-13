
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/fcall.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Instancetest_ExampleService) {

	ZEPHIR_REGISTER_CLASS(Instancetest, ExampleService, instancetest, exampleservice, instancetest_exampleservice_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Instancetest_ExampleService, __construct) {

	zval *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m, *n, *o;

	zephir_fetch_params(0, 15, 0, &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o);




}

PHP_METHOD(Instancetest_ExampleService, get) {

	

	php_printf("%s", "working");

}

PHP_METHOD(Instancetest_ExampleService, test) {

	zval *parameters = NULL, *_0 = NULL, _1;
	int ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(parameters);
	zephir_create_array(parameters, 15, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(_0);
	object_init_ex(_0, instancetest_aservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_bservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_cservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_dservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_eservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_fservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_gservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_hservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_iservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_jservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_kservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_lservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_mservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_nservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_INIT_NVAR(_0);
	object_init_ex(_0, instancetest_oservice_ce);
	if (zephir_has_constructor(_0 TSRMLS_CC)) {
		ZEPHIR_CALL_METHOD(NULL, _0, "__construct", NULL, 0);
		zephir_check_call_status();
	}
	zephir_array_fast_append(parameters, _0);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_STRING(&_1, "Instancetest\\ExampleService", 0);
	ZEPHIR_LAST_CALL_STATUS = zephir_create_instance_params(return_value, &_1, parameters TSRMLS_CC);
	zephir_check_call_status();
	RETURN_MM();

}

