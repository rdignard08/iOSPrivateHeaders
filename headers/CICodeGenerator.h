
@interface CICodeGenerator : CIFilter {

    NSData* inputMessage;
}

 - (id) outputImage;
 - (^{CGImage=}) outputCGImage;
 - (id) inputMessage;
 - (void) setInputMessage:(id)a ;


@end
