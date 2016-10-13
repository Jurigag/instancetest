
extern zend_class_entry *instancetest_exampleservice_ce;

ZEPHIR_INIT_CLASS(Instancetest_ExampleService);

PHP_METHOD(Instancetest_ExampleService, __construct);
PHP_METHOD(Instancetest_ExampleService, get);
PHP_METHOD(Instancetest_ExampleService, test);

ZEND_BEGIN_ARG_INFO_EX(arginfo_instancetest_exampleservice___construct, 0, 0, 15)
	ZEND_ARG_OBJ_INFO(0, a, Instancetest\\AService, 0)
	ZEND_ARG_OBJ_INFO(0, b, Instancetest\\BService, 0)
	ZEND_ARG_OBJ_INFO(0, c, Instancetest\\CService, 0)
	ZEND_ARG_OBJ_INFO(0, d, Instancetest\\DService, 0)
	ZEND_ARG_OBJ_INFO(0, e, Instancetest\\EService, 0)
	ZEND_ARG_OBJ_INFO(0, f, Instancetest\\FService, 0)
	ZEND_ARG_OBJ_INFO(0, g, Instancetest\\GService, 0)
	ZEND_ARG_OBJ_INFO(0, h, Instancetest\\HService, 0)
	ZEND_ARG_OBJ_INFO(0, i, Instancetest\\IService, 0)
	ZEND_ARG_OBJ_INFO(0, j, Instancetest\\JService, 0)
	ZEND_ARG_OBJ_INFO(0, k, Instancetest\\KService, 0)
	ZEND_ARG_OBJ_INFO(0, l, Instancetest\\LService, 0)
	ZEND_ARG_OBJ_INFO(0, m, Instancetest\\MService, 0)
	ZEND_ARG_OBJ_INFO(0, n, Instancetest\\NService, 0)
	ZEND_ARG_OBJ_INFO(0, o, Instancetest\\OService, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(instancetest_exampleservice_method_entry) {
	PHP_ME(Instancetest_ExampleService, __construct, arginfo_instancetest_exampleservice___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Instancetest_ExampleService, get, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Instancetest_ExampleService, test, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
