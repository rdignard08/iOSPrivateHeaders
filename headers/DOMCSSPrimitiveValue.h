
@interface DOMCSSPrimitiveValue : DOMCSSValue {

}

 - (S) primitiveType;
 - (id) getStringValue;
 - (f) getFloatValue:(S)a;
 - (id) getRGBColorValue;
 - (void) setFloatValue:(S)afloatValue:(f)b;
 - (void) setFloatValue:(S)a;
 - (void) setStringValue:(S)astringValue:(id)b;
 - (void) setStringValue:(S)a;
 - (id) getCounterValue;
 - (id) getRectValue;


@end
