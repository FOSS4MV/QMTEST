$ifndef assertions_h

    $define assertions_h 1
    
    * True/False assertions.
    * There really isn't a defsub keyword this is for documentation purposes only.
    *
    * defsub assertTrue(condition, message='') var.args
    * defsub assertFalse(condition, message='') var.args
    
    * Equal/NotEqual assertions.
    *
    * defsub assertEqual(expected, actual, message='') var.args
    * defsub assertNotEqual(expected, actual, message='') var.args
    
    * Multivalue Equals/NotEquals assertions.
    *
    * defsub assertEquals(expected, actual, message='') var.args
    * defsub assertNotEquals(expected, actual, message='') var.args
    
    * Null/NotNull assertions
    *
    * defsub assertNull(value, message='') var.args
    * defsub assertNotNull(value, message='') var.args
    
$endif
