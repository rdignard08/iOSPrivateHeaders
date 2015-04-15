
@protocol NSCopying;
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {

    BOOL _opaque;
    BOOL _selected;
    {CGSize="width"d"height"d} _size;
    @"UIColor" _backgroundColor;
    @"UIColor" _sectionBorderColor;
    d _sectionBorderWidth;
    @"UIColor" _separatorColor;
    @"UIColor" _topShadowColor;
    @"UIColor" _bottomShadowColor;
    @"UIColor" _fillColor;
    @"UIColor" _selectionColor;
    d _leftPhase;
    d _rightPhase;
    i _sectionLocation;
    q _selectionStyle;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _separatorInset;
}
@property (nonatomic, assign, readwrite) NSNumber* opaque;
@property (nonatomic, assign, readwrite) NSNumber* selected;
@property (nonatomic, assign, readwrite) NSNumber* size;
@property (nonatomic, retain, readwrite) UIColor* backgroundColor;
@property (nonatomic, retain, readwrite) UIColor* sectionBorderColor;
@property (nonatomic, assign, readwrite) NSNumber* sectionBorderWidth;
@property (nonatomic, retain, readwrite) UIColor* separatorColor;
@property (nonatomic, retain, readwrite) UIColor* topShadowColor;
@property (nonatomic, retain, readwrite) UIColor* bottomShadowColor;
@property (nonatomic, retain, readwrite) UIColor* fillColor;
@property (nonatomic, retain, readwrite) UIColor* selectionColor;
@property (nonatomic, assign, readwrite) NSNumber* leftPhase;
@property (nonatomic, assign, readwrite) NSNumber* rightPhase;
@property (nonatomic, assign, readwrite) NSNumber* sectionLocation;
@property (nonatomic, assign, readwrite) NSNumber* selectionStyle;
@property (nonatomic, assign, readwrite) NSNumber* separatorInset;

 - ({CGSize=dd}) size;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) separatorColor;
 - (void) setSectionBorderColor:(id)a;
 - ({UIEdgeInsets=dddd}) separatorInset;
 - (void) setSeparatorColor:(id)a;
 - (void) setTopShadowColor:(id)a;
 - (void) setBottomShadowColor:(id)a;
 - (id) sectionBorderColor;
 - (void) setSelected:(BOOL)a;
 - (void) setSeparatorInset:({UIEdgeInsets=dddd})a;
 - (void) setSelectionStyle:(q)a;
 - (q) selectionStyle;
 - (i) sectionLocation;
 - (id) topShadowColor;
 - (BOOL) opaque;
 - (void) setSectionBorderWidth:(d)a;
 - (void) setSectionLocation:(i)a;
 - (id) bottomShadowColor;
 - (BOOL) selected;
 - (d) sectionBorderWidth;
 - (id) selectionColor;
 - (void) setSelectionColor:(id)a;
 - (d) leftPhase;
 - (void) setLeftPhase:(d)a;
 - (d) rightPhase;
 - (void) setRightPhase:(d)a;
 - (void) setSize:({CGSize=dd})a;
 - (void) setBackgroundColor:(id)a;
 - (id) backgroundColor;
 - (id) fillColor;
 - (void) setFillColor:(id)a;
 - (void) setOpaque:(BOOL)a;


@end
