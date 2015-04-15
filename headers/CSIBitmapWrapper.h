
@interface CSIBitmapWrapper : NSObject {

    ^{CGContext=} _bitmapContext;
    NSData* _pixelData;
    NSData* _rawData;
    unsigned int _pixelFormat;
    unsigned int _width;
    unsigned int _height;
    unsigned long long _rowbytes;
    BOOL _allowsMultiPassEncoding;
    unsigned int _imageAlpha;
}
@property (nonatomic, assign, readwrite) NSNumber* pixelFormat;
@property (atomic, assign, readwrite) NSNumber* allowsMultiPassEncoding;

 - (void) dealloc;
 - (void) finalize;
 - (id) compressedData:(BOOL)ausedEncoding:(^i)bandRowChunkSize:(^I)c;
 - (BOOL) allowsMultiPassEncoding;
 - (unsigned int) sourceImageAlpha;
 - (unsigned long long) rowbytes;
 - (unsigned int) pixelFormat;
 - (void) setPixelFormat:(unsigned int)a;
 - (void) setAllowsMultiPassEncoding:(BOOL)a;
 - (^{CGContext=}) bitmapContext;
 - (id) pixelData;
 - (id) initWithPixelWidth:(unsigned int)apixelHeight:(unsigned int)b;
 - (void) setSourceAlphaInfo:(unsigned int)a;
 - (void) setPixelData:(id)a;
 - (unsigned int) width;
 - (unsigned int) height;


@end
