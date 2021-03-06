/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewGenerationInfo : NSObject {
    NSMutableArray * _dependentViewGenerators;
    BOOL  _hasUpdatesToApply;
    BOOL  _needsUpdateViewHierarchy;
    int  _numberOfDependencies;
    <_UIViewGenerator> * _viewGenerator;
}

@property (nonatomic, retain) NSMutableArray *dependentViewGenerators;
@property (nonatomic) BOOL hasUpdatesToApply;
@property (nonatomic) BOOL needsUpdateViewHierarchy;
@property (nonatomic) int numberOfDependencies;
@property (nonatomic) <_UIViewGenerator> *viewGenerator;

- (void).cxx_destruct;
- (id)dependentViewGenerators;
- (BOOL)hasUpdatesToApply;
- (id)initWithGenerator:(id)arg1;
- (BOOL)needsUpdateViewHierarchy;
- (int)numberOfDependencies;
- (void)setDependentViewGenerators:(id)arg1;
- (void)setHasUpdatesToApply:(BOOL)arg1;
- (void)setNeedsUpdateViewHierarchy:(BOOL)arg1;
- (void)setNumberOfDependencies:(int)arg1;
- (void)setViewGenerator:(id)arg1;
- (id)viewGenerator;

@end
