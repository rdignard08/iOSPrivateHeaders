
@interface _CSIRenditionBlockData : NSObject {

    I _dataPixelFormat;
    i _pixelFormat;
    * _data;
    I _nrows;
    Q _rowbytes;
    [128c] _name;
    C _imageBlockReleaseCount;
    b1 _mmappedData;
    Q _sourceRowbytes;
}
 + (id) sharedCache;

 - (void) dealloc;
 - (r*) bytes;
 - (Q) rowbytes;
 - (i) pixelFormat;
 - (void) _allocateImageBytes;
 - (void) _freeImageBytes;
 - (void) _makeReadOnly;
 - (id) initWithPixelWidth:(I)apixelHeight:(I)bsourceRowbytes:(Q)cpixelFormat:(i)d;
 - (void) updateFromCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;
 - (I) nrows;
 - (BOOL) wasUsedTransiently;
 - (void) tallyImageBlockRelease;
 - (void) expandCSIBitmapData:(^{_csibitmap=I(?=I{_csibitmapflags=b1b1b30})II[0C]})afromSlice:({_slice=IIII})bmakeReadOnly:(BOOL)c;


@end
