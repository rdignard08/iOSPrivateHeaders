
@interface CSIBitmapWrapper : NSObject {

    ^{CGContext=} _bitmapContext;
    @"NSData" _pixelData;
    @"NSData" _rawData;
    I _pixelFormat;
    I _width;
    I _height;
    Q _rowbytes;
    BOOL _allowsMultiPassEncoding;
    I _imageAlpha;
}
@property (nonatomic, assign, readwrite) NSNumber* pixelFormat;
@property (atomic, assign, readwrite) NSNumber* allowsMultiPassEncoding;

 - (void) dealloc;
 - (void) finalize;
 - (id) compressedData:(BOOL)ausedEncoding:(^i)bandRowChunkSize:(^I)c;
 - (BOOL) allowsMultiPassEncoding;
 - (I) sourceImageAlpha;
 - (Q) rowbytes;
 - (I) pixelFormat;
 - (void) setPixelFormat:(I)a;
 - (void) setAllowsMultiPassEncoding:(BOOL)a;
 - (^{CGContext=}) bitmapContext;
 - (id) pixelData;
 - (id) initWithPixelWidth:(I)apixelHeight:(I)b;
 - (void) setSourceAlphaInfo:(I)a;
 - (void) setPixelData:(id)a;
 - (I) width;
 - (I) height;


@end
