
@interface FCRImageConversionUtils : NSObject {

}
 + (*) convertCGImageToBufferUsingDataProvider:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)c;
 + (*) convertCGImageToBufferUsingRGBDevice:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)ccacheContext:(BOOL)d;
 + (*) convertCGImageToBufferUsingGrayDevice:(^{CGImage=})a;
 + (*) convertCGImageToGrayscale:(^{CGImage=})ausingGCD:(BOOL)bcacheContext:(BOOL)c;



@end
