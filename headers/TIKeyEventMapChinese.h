
@interface TIKeyEventMapChinese : TIKeyEventMap {

}
 + (BOOL) supportsSecureCoding;

 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(Q)ckeyboardState:(id)d;
 - (BOOL) isURLOrEmailKeyboardInKeyboardState:(id)a;


@end
