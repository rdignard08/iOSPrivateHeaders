
@interface TIKeyEventMapWubi : TIKeyEventMapChinese {

}
 + (BOOL) supportsSecureCoding;

 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(Q)ckeyboardState:(id)d;
 - (id) wubiFromASCII:(id)a;
 - (BOOL) isNumericWubi:(id)a;


@end
