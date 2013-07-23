QMTEST is an simple, straight forward way to create unit tests for QM.  
Using annotations placed above each test method in a test case class you 
can easily run tests against both object oriented and non-object oriented
code.  Annotations are added to the code by placing them between braces {}
immediately proceeding the intended target method signature or class
signature.  Also, the class must inherit the QMTestCase class to allow for
easy use of the assertions.

Example:

	$catalog MyTestCase local
	{TestCase}
	class MyTestCase inherits QMTestCase
		
		{Test}
		public sub testTrue()
			me->assertTrue(@true)
		end
		
	end

To compile use the COMPILE preprocessor rather than the regular QM BASIC
command.  It prepends a $\* to each annotation so that the QM BASIC command
can compile the code and will place each one in the "meta-data" of the 
compiled object.  To execute type RUNTESTS {classcatalogname}.  The runner
will call !FINDPROG to get the annotations and call each {Test} method.

In addition: A {BeforeClass} annotated method will be run one time
prior to running any tests within the class, and {AfterClass} annotated
method will be run after all tests are complete.  {Before} annotated method
is run before each and every test in the class and {After} annotated method
is run after each and every test in the class.  Tests are run in the order
they are defined in the class.