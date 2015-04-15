
@protocol NSCopying;
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {

    BOOL _opaque;
    BOOL _selected;
    {CGSize="width"d"height"d} _size;
    UIColor _backgroundColor;
    UIColor _sectionBorderColor;
    double _sectionBorderWidth;
    UIColor _separatorColor;
    UIColor _topShadowColor;
    UIColor _bottomShadowColor;
    UIColor _fillColor;
    UIColor _selectionColor;
    double _leftPhase;
    double _rightPhase;
    int _sectionLocation;
    long long _selectionStyle;
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
 - (unsigned long long) hash;
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
 - (void) setSelectionStyle:(long long)a;
 - (long long) selectionStyle;
 - (int) sectionLocation;
 - (id) topShadowColor;
 - (BOOL) opaque;
 - (void) setSectionBorderWidth:(double)a;
 - (void) setSectionLocation:(int)a;
 - (id) bottomShadowColor;
 - (BOOL) selected;
 - (double) sectionBorderWidth;
 - (id) selectionColor;
 - (void) setSelectionColor:(id)a;
 - (double) leftPhase;
 - (void) setLeftPhase:(double)a;
 - (double) rightPhase;
 - (void) setRightPhase:(double)a;
 - (void) setSize:({CGSize=dd})a;
 - (void) setBackgroundColor:(id)a;
 - (id) backgroundColor;
 - (id) fillColor;
 - (void) setFillColor:(id)a;
 - (void) setOpaque:(BOOL)a;


@end
