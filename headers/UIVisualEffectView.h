
@protocol NSSecureCoding;
@interface UIVisualEffectView : UIView <NSSecureCoding> {

    UIView _maskView;
    {?="hasHadAlphaAnimated"b1"suppressReportingEmptyContentView"b1} _effectViewFlags;
    _UIVisualEffectContentView _contentView;
    NSString _groupName;
    UIVisualEffect _effect;
}
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (void) _populateArchivedSubviews:(id)a;
 - (void) setMaskView:(id)a;
 - (id) maskView;
 - (void) viewDidMoveToSuperview;
 - (id) _groupName;
 - (id) initWithEffect:(id)a;
 - (void) _setGroupName:(id)a;
 - (void) _configureForCurrentEffect;
 - (void) _createContentViewIfNecessary;
 - (void) _setEffect:(id)a;
 - (id) effect;
 - (void) _configureForEffectSettings:(id)a;
 - (void) _configureForEffectConfig:(id)a;
 - (void) _applyGroupNameToSubviews;
 - (id) _whatsWrongWithThisEffect;
 - (void) setEffect:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) _commonInit;
 - (id) contentView;
 - (void) setContentView:(id)a;
 - (id) actionForLayer:(id)aforKey:(id)b;


@end
