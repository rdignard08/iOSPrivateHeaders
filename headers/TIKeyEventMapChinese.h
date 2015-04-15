
@interface TIKeyEventMapChinese : TIKeyEventMap {

}
 + (BOOL) supportsSecureCoding;

 - (id) remapKeyWithString:(id)a stringWithoutModifiers:(id)b modifierFlags:(unsigned long long)c keyboardState:(id)d ;
 - (BOOL) isURLOrEmailKeyboardInKeyboardState:(id)a ;


@end
