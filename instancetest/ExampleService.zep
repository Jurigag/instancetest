
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


class ExampleService {
    public function __construct(<AService> a,
        <BService> b,
        <CService> c,
        <DService> d,
        <EService> e,
        <FService> f,
        <GService> g,
        <HService> h,
        <IService> i,
        <JService> j,
        <KService> k,
        <LService> l,
        <MService> m,
        <NService> n,
        <OService> o
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
            new HService(), new IService(), new JService(), new KService(), new LService(), new MService(), new NService(),
            new OService()
        ];

        return create_instance_params("Instancetest\\ExampleService", parameters);
    }
}