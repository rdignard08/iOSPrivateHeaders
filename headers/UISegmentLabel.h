
@interface UISegmentLabel : UILabel {

    UILabel* _associatedLabel;
}

 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (id) _disabledFontColor;
 - (id) _associatedScalingLabel;
 - (void) setAssociatedLabel:(id)a;
 - (id) associatedLabel;
 - (id) init;


@end
