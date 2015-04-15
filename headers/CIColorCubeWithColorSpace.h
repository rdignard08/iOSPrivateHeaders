
@interface CIColorCubeWithColorSpace : CIColorCube {

    id inputColorSpace;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (void) setInputColorSpace:(id)a ;
 - (id) inputColorSpace;


@end
