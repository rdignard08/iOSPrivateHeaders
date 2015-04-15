
@interface CICode128BarcodeGenerator : CICodeGenerator {

    NSNumber* inputQuietSpace;
}
 + (id) customAttributes;

 - (^{CGImage=}) outputCGImage;
 - (id) inputQuietSpace;
 - (void) setInputQuietSpace:(id)a ;


@end
