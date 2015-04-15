
@interface DOMCSSPrimitiveValue : DOMCSSValue {

}

 - (unsigned short) primitiveType;
 - (id) getStringValue;
 - (float) getFloatValue:(unsigned short)a ;
 - (id) getRGBColorValue;
 - (void) setFloatValue:(unsigned short)a floatValue:(float)b ;
 - (void) setFloatValue:(unsigned short)a ;
 - (void) setStringValue:(unsigned short)a stringValue:(id)b ;
 - (void) setStringValue:(unsigned short)a ;
 - (id) getCounterValue;
 - (id) getRectValue;


@end
