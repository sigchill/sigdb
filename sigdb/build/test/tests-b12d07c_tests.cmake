add_test( [==[validate environment]==] /home/joe/repos/sigdb/sigdb/build/test/tests [==[validate environment]==]  )
set_tests_properties( [==[validate environment]==] PROPERTIES WORKING_DIRECTORY /home/joe/repos/sigdb/sigdb/build/test SKIP_RETURN_CODE 4)
set( tests_TESTS [==[validate environment]==])
