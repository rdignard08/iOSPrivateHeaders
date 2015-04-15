
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
 - (void) render:(id)a toBitmap:(^v)b rowBytes:(long long)c bounds:({CGRect={CGPoint=dd}{CGSize=dd}})d format:(int)e colorSpace:(^{CGColorSpace=})f ;
 - (id) initWithEAGLContext:(id)a ;
 - (id) initWithEAGLContext:(id)a options:(id)b ;
 - (id) _initWithInternalRepresentation:(^v)a ;
 - (void) _gpuContextCheck;
 - (^{CGColorSpace=}) _colorspace;
 - (void) render:(id)a toCVPixelBuffer:(^{__CVBuffer=})b bounds:({CGRect={CGPoint=dd}{CGSize=dd}})c colorSpace:(^{CGColorSpace=})d ;
 - (BOOL) _isEAGLBackedContext;
 - (void) drawImage:(id)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c ;
 - (^{CGImage=}) createCGImage:(id)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b format:(int)c colorSpace:(^{CGColorSpace=})d ;
 - (void) render:(id)a toCVPixelBuffer:(^{__CVBuffer=})b ;
 - (void) _insertEventMarker:(r*)a ;
 - (void) drawImage:(id)a atPoint:({CGPoint=dd})b fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})c ;
 - (void) render:(id)a toTexture:(unsigned int)b bounds:({CGRect={CGPoint=dd}{CGSize=dd}})c colorSpace:(^{CGColorSpace=})d ;
 - (^{CGImage=}) createCGImage:(id)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (^{CGImage=}) createCGImage:(id)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b format:(int)c ;
 - (unsigned long long) maximumInputImageSize;
 - (unsigned long long) maximumOutputImageSize;
 - ({CGSize=dd}) inputImageMaximumSize;
 - ({CGSize=dd}) outputImageMaximumSize;
 - (id) createColorCubeDataForFilters:(id)a dimension:(int)b ;


@end
