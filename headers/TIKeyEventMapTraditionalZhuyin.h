
@interface TIKeyEventMapTraditionalZhuyin : TIKeyEventMapChineseMecabra {

}
 + (BOOL) supportsSecureCoding;

 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(Q)ckeyboardState:(id)d;
 - (BOOL) isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)a;


@end
