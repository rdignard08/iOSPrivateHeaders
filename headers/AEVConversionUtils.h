
@interface AEVConversionUtils : NSObject {

}
 + (*) convertCGImageToGrayscale:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)c;
 + (*) convertCGImageToBufferUsingDataProvider:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)c;
 + (*) convertCGImageToBufferUsingGrayDevice:(^{CGImage=})a;
 + (*) convertCGImageToGrayscale:(^{CGImage=})a;
 + (*) convertCGImageToBufferUsingRGBDevice:(^{CGImage=})ausingGCD:(BOOL)bdispatchQueue:(id)c;
 + (^{CGImage=}) createImageFromGrayscaleData:(*)aofWidth:(i)bandHeight:(i)c;



@end
