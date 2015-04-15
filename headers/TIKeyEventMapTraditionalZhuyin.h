
@interface TIKeyEventMapTraditionalZhuyin : TIKeyEventMapChineseMecabra {

}
 + (BOOL) supportsSecureCoding;

 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(unsigned long long)ckeyboardState:(id)d;
 - (BOOL) isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)a;


@end
