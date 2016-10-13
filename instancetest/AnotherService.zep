
/*
 +------------------------------------------------------------------------+
 | Phalcon Framework                                                      |
 +------------------------------------------------------------------------+
 | Copyright (c) 2011-2015 Phalcon Team (http://www.phalconphp.com)       |
 +------------------------------------------------------------------------+
 | This source file is subject to the New BSD License that is bundled     |
 | with this package in the file docs/LICENSE.txt.                        |
 |                                                                        |
 | If you did not receive a copy of the license and are unable to         |
 | obtain it through the world-wide-web, please send an email             |
 | to license@phalconphp.com so we can send you a copy immediately.       |
 +------------------------------------------------------------------------+
 | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
 |          Eduar Carvajal <eduar@phalconphp.com>                         |
 +------------------------------------------------------------------------+
 */


namespace Instancetest;


class AnotherService {
    public function __construct(<AService> a,
        <BService> b,
        <CService> c,
        <DService> d,
        <EService> e,
        <FService> f,
        <GService> g,
        <HService> h,
        <IService> i,
        <JService> j
    )
    {

    }

    public function get()
    {
        echo "working";
    }

    public static function test()
    {
        var parameters;
        let parameters = [
            new AService(), new BService(), new CService(), new DService(), new EService(), new FService(), new GService(),
            new HService(), new IService(), new JService()
        ];

        return create_instance_params("Instancetest\\AnotherService", parameters);
    }
}