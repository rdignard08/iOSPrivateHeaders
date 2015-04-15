
@interface TIKeyEventMapChinese : TIKeyEventMap {

}
 + (BOOL) supportsSecureCoding;

 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(unsigned long long)ckeyboardState:(id)d;
 - (BOOL) isURLOrEmailKeyboardInKeyboardState:(id)a;


@end
