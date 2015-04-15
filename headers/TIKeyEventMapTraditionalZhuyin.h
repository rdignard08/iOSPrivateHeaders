
@interface TIKeyEventMapTraditionalZhuyin : TIKeyEventMapChineseMecabra {

}
 + (BOOL) supportsSecureCoding;

 - (id) remapKeyWithString:(id)a stringWithoutModifiers:(id)b modifierFlags:(unsigned long long)c keyboardState:(id)d ;
 - (BOOL) isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)a ;


@end
