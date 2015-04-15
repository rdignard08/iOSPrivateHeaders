
@interface CIQRCodeGenerator : CICodeGenerator {

    NSString* inputCorrectionLevel;
}
 + (id) customAttributes;

 - (void) setValue:(id)a forUndefinedKey:(id)b ;
 - (^{CGImage=}) outputCGImage;
 - (void) setInputCorrectionLevel:(id)a ;
 - (id) inputCorrectionLevel;


@end
