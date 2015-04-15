
@interface _CSIRenditionBlockData : NSObject {

    unsigned int _dataPixelFormat;
    int _pixelFormat;
    char* _data;
    unsigned int _nrows;
    unsigned long long _rowbytes;
    [128c] _name;
    unsigned char _imageBlockReleaseCount;
    b1 _mmappedData;
    unsigned long long _sourceRowbytes;
}
 + (id) sharedCache;

 - (void) dealloc;
 - (r*) bytes;
 - (unsigned long long) rowbytes;
 - (int) pixelFormat;
 - (void) _allocateImageBytes;
 - (void) _freeImageBytes;
 - (void) _makeReadOnly;
 - (id) initWithPixelWidth:(unsigned int)a pixelHeight:(unsigned int)b sourceRowbytes:(unsigned long long)c pixelFormat:(int)d ;
 - (void) updateFromCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a ;
 - (unsigned int) nrows;
 - (BOOL) wasUsedTransiently;
 - (void) tallyImageBlockRelease;
 - (void) expandCSIBitmapData:(^{_csibitmap=I(?=I{_csibitmapflags=b1b1b30})II[0C]})a fromSlice:({_slice=IIII})b makeReadOnly:(BOOL)c ;


@end
