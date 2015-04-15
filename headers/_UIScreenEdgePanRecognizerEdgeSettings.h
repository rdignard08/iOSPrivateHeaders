
@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings {

    double _hysteresis;
    double _edgeRegionSize;
    double _bottomEdgeRegionSize;
    double _backProjectionTime;
    double _edgeAngleWindow;
    double _edgeAngleWindowDecayTime;
    double _restrictedEdgeRegionTimeInterval;
    double _restrictedEdgeRegionMinimumWeight;
    double _maximumSwipeDuration;
}
 + (id) settingsControllerModule;
 + (id) keyPathsForValuesAffectingEdgeAngleWindowDegreees;

 - (void) setDefaultValues;
 - (void) setHysteresis:(double)a ;
 - (void) setEdgeRegionSize:(double)a ;
 - (void) setBottomEdgeRegionSize:(double)a ;
 - (void) setBackProjectionTime:(double)a ;
 - (void) setEdgeAngleWindow:(double)a ;
 - (void) setEdgeAngleWindowDecayTime:(double)a ;
 - (void) setRestrictedEdgeRegionTimeInterval:(double)a ;
 - (void) setRestrictedEdgeRegionMinimumWeight:(double)a ;
 - (void) setMaximumSwipeDuration:(double)a ;
 - (double) edgeAngleWindow;
 - (double) edgeAngleWindowDegreees;
 - (void) setEdgeAngleWindowDegreees:(double)a ;
 - (double) hysteresis;
 - (double) edgeRegionSize;
 - (double) bottomEdgeRegionSize;
 - (double) backProjectionTime;
 - (double) edgeAngleWindowDecayTime;
 - (double) restrictedEdgeRegionTimeInterval;
 - (double) restrictedEdgeRegionMinimumWeight;
 - (double) maximumSwipeDuration;


@end
