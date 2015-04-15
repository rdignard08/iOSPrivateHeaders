
@interface DOMCSSPrimitiveValue : DOMCSSValue {

}

 - (unsigned short) primitiveType;
 - (id) getStringValue;
 - (float) getFloatValue:(unsigned short)a;
 - (id) getRGBColorValue;
 - (void) setFloatValue:(unsigned short)afloatValue:(float)b;
 - (void) setFloatValue:(unsigned short)a;
 - (void) setStringValue:(unsigned short)astringValue:(id)b;
 - (void) setStringValue:(unsigned short)a;
 - (id) getCounterValue;
 - (id) getRectValue;


@end
