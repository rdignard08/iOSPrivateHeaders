
@interface CIContext : NSObject {

    ^{CIContextInternal=^{Context}{_opaque_pthread_mutex_t=q[56c]}B@} _priv;
}
 + (id) clContextOptions:(id)a;
 + (id) glesContextOptions:(id)a;
 + (^{Context=^^?{Atomic={?=i}}^{CGColorSpace}^{CGColorSpace}iB}) glesInternalContextWithEAGLContext:(id)aoptions:(id)b;
 + (int) _crashed_because_nonaddressable_memory_was_passed_to_render:(id)atoBitmap:(^v)browBytes:(long long)cbounds:({CGRect={CGPoint=dd}{CGSize=dd}})dformat:(int)ecolorSpace:(^{CGColorSpace=})f;
 + (id) _singletonContext;
 + (id) contextWithEAGLContext:(id)a;
 + (id) contextWithEAGLContext:(id)aoptions:(id)b;
 + (^{Context=^^?{Atomic={?=i}}^{CGColorSpace}^{CGColorSpace}iB}) glesInternalContextWithOptions:(id)a;
 + (id) contextWithOptions:(id)a;
 + (id) context;

 - (void) dealloc;
 - (void) lock;
 - (void) unlock;
 - (id) init;
 - (void) render:(id)atoBitmap:(^v)browBytes:(long long)cbounds:({CGRect={CGPoint=dd}{CGSize=dd}})dformat:(int)ecolorSpace:(^{CGColorSpace=})f;
 - (id) initWithEAGLContext:(id)a;
 - (id) initWithEAGLContext:(id)aoptions:(id)b;
 - (id) _initWithInternalRepresentation:(^v)a;
 - (void) _gpuContextCheck;
 - (^{CGColorSpace=}) _colorspace;
 - (void) render:(id)atoCVPixelBuffer:(^{__CVBuffer=})bbounds:({CGRect={CGPoint=dd}{CGSize=dd}})ccolorSpace:(^{CGColorSpace=})d;
 - (BOOL) _isEAGLBackedContext;
 - (void) drawImage:(id)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (^{CGImage=}) createCGImage:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})bformat:(int)ccolorSpace:(^{CGColorSpace=})d;
 - (void) render:(id)atoCVPixelBuffer:(^{__CVBuffer=})b;
 - (void) _insertEventMarker:(r*)a;
 - (void) drawImage:(id)aatPoint:({CGPoint=dd})bfromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 - (void) render:(id)atoTexture:(unsigned int)bbounds:({CGRect={CGPoint=dd}{CGSize=dd}})ccolorSpace:(^{CGColorSpace=})d;
 - (^{CGImage=}) createCGImage:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (^{CGImage=}) createCGImage:(id)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})bformat:(int)c;
 - (unsigned long long) maximumInputImageSize;
 - (unsigned long long) maximumOutputImageSize;
 - ({CGSize=dd}) inputImageMaximumSize;
 - ({CGSize=dd}) outputImageMaximumSize;
 - (id) createColorCubeDataForFilters:(id)adimension:(int)b;


@end
