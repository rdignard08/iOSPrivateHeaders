
@interface CIPDF417BarcodeGenerator : CICodeGenerator {

    NSDictionary* inputOptions;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (^{CGImage=}) outputCGImage;
 - (void) setInputOptions:(id)a;
 - (id) inputOptions;


@end
