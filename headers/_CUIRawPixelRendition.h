
@interface _CUIRawPixelRendition : CUIThemeRendition {

    unsigned int _nimages;
    [16^{CGImage}] _image;
    ^{CGImage=} _unslicedImage;
    CUIRenditionMetrics* _renditionMetrics;
    CUIRenditionSliceInformation* _sliceInformation;
}

 - (void) dealloc;
 - (id) imageForSliceIndex:(long long)a ;
 - (BOOL) isScaled;
 - (id) maskForSliceIndex:(long long)a ;
 - (^{CGImage=}) unslicedImage;
 - (id) metrics;
 - (id) sliceInformation;
 - (id) initWithCSIData:(id)a forKey:(r^{_renditionkeytoken=SS})b artworkStatus:(long long)c ;
 - (id) _initWithCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a ;


@end
