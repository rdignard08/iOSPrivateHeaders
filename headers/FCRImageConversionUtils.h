
@interface FCRImageConversionUtils : NSObject {

}
 + (char*) convertCGImageToBufferUsingDataProvider:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)c;
 + (char*) convertCGImageToBufferUsingRGBDevice:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)ccacheContext:(BOOL)d;
 + (char*) convertCGImageToBufferUsingGrayDevice:(^{CGImage=})a;
 + (char*) convertCGImageToGrayscale:(^{CGImage=})ausingGCD:(BOOL)bcacheContext:(BOOL)c;



@end
