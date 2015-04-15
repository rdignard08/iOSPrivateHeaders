
@interface CUIThemeSchemaRendition : CUIThemeRendition {

    NSDictionary cuiInfo;
    unsigned long long _nimages;
    [9^{CGImage}] _image;
    [9{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}] _layoutRects;
    {CGSize="width"d"height"d} _intrinsicSize;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _elementRect;
    long long _columnSlices;
    long long _rowSlices;
    {?="top"d"left"d"bottom"d"right"d} _contentInsets;
    CUIPSDGradient _gradient;
}

 - (double) scale;
 - (unsigned short) size;
 - (id) description;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (id) slices;
 - (unsigned short) state;
 - (unsigned short) value;
 - (unsigned short) identifier;
 - (id) gradient;
 - (unsigned long long) numberOfSlices;
 - (id) initWithCoreUIOptions:(id)aforKey:(r^{_renditionkeytoken=SS})bartworkStatus:(long long)c;
 - (id) referenceImage;
 - (unsigned short) dimension1;
 - (unsigned short) presentationState;
 - (unsigned short) dimension2;
 - (unsigned short) drawingLayer;
 - (unsigned short) keyScale;
 - (id) stringForState:(unsigned short)a;
 - (unsigned short) previousState;
 - (unsigned short) direction;
 - (id) stringForValue:(unsigned short)a;
 - (unsigned short) previousValue;
 - (unsigned short) look;
 - (^{CGRect={CGPoint=dd}{CGSize=dd}}) sliceRects;
 - (id) initWithCoreUIOptions:(id)aforKey:(r^{_renditionkeytoken=SS})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) alignmentRectangle;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) edgeInsets:(BOOL)a;
 - ({?=dddd}) contentInsets;
 - (id) coreUIOptions;
 - (id) defaultTemplateName;
 - (long long) columnSlices;
 - (long long) rowSlices;
 - ({CGPoint=dd}) renditionCoordinatesForPartFeatures:(long long)a;
 - (id) typeLocalizedString;
 - (id) stateLocalizedString;
 - (id) previousStateLocalizedString;
 - (id) directionLocalizedString;
 - (id) valueLocalizedString;
 - (id) previousValueLocalizedString;
 - (id) sizeLocalizedString;
 - (id) presentationStateLocalizedString;
 - (id) dimension1LocalizedString;
 - (id) dimension2LocalizedString;
 - (id) drawingLayerLocalizedString;
 - (id) lookLocalizedString;
 - (id) scaleLocalizedString;
 - (unsigned short) layer;


@end
