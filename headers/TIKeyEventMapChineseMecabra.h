
@interface TIKeyEventMapChineseMecabra : TIKeyEventMapChinese {

}
 + (BOOL) supportsSecureCoding;
 + (id) inlineNumbersAndPunctuationSet;

 - (id) remapKeyWithString:(id)astringWithoutModifiers:(id)bmodifierFlags:(Q)ckeyboardState:(id)d;


@end
