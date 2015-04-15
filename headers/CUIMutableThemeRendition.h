
@interface CUIMutableThemeRendition : CUIThemeRendition {

    ^{_renditionkeytoken=SS} _renditionKey;
    ^{CGImage=} _image;
    CUIRenditionSliceInformation _sliceInformation;
    CUIRenditionMetrics _renditionMetrics;
}

 - (void) dealloc;
 - (r^{_renditionkeytoken=SS}) key;
 - (void) setName:(id)a;
 - (id) initWithCGImage:(^{CGImage=})awithDescription:(id)bforKey:(r^{_renditionkeytoken=SS})c;
 - (^{CGImage=}) unslicedImage;
 - (id) metrics;
 - (id) sliceInformation;


@end
