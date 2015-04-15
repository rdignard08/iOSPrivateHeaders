
@interface TIKeyEventMapWubi : TIKeyEventMapChinese {

}
 + (BOOL) supportsSecureCoding;

 - (id) remapKeyWithString:(id)a stringWithoutModifiers:(id)b modifierFlags:(unsigned long long)c keyboardState:(id)d ;
 - (id) wubiFromASCII:(id)a ;
 - (BOOL) isNumericWubi:(id)a ;


@end
