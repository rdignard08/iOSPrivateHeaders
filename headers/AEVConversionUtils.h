
@interface AEVConversionUtils : NSObject {

}
 + (char*) convertCGImageToGrayscale:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)c;
 + (char*) convertCGImageToBufferUsingDataProvider:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)c;
 + (char*) convertCGImageToBufferUsingGrayDevice:(^{CGImage=})a;
 + (char*) convertCGImageToGrayscale:(^{CGImage=})a;
 + (char*) convertCGImageToBufferUsingRGBDevice:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)c;
 + (^{CGImage=}) createImageFromGrayscaleData:(char*)aofWidth:(int)bandHeight:(int)c;



@end
