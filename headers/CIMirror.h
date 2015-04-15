
@interface CIMirror : CIFilter {

    CIImage* inputImage;
    CIVector* inputPoint;
    NSNumber* inputAngle;
}
 + (id) customAttributes;

 - (void) setDefaults;
 - (id) outputImage;
 - (id) inputImage;
 - (void) setInputImage:(id)a ;
 - (id) _kernel;
 - (id) inputAngle;
 - (void) setInputAngle:(id)a ;
 - (void) setInputPoint:(id)a ;
 - ({Rectangle=dddd}) computeDOD:({vec2=ff})a tst:({vec3=fff})b off:({vec4=ffff})c mtx:({vec4=ffff})d ;
 - (id) inputPoint;


@end
