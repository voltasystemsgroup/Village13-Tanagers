using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;

namespace UserModule_VILLAGE13___SEURASTORM_V1_00
{
    public class UserModuleClass_VILLAGE13___SEURASTORM_V1_00 : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        
        Crestron.Logos.SplusObjects.DigitalInput POWON;
        Crestron.Logos.SplusObjects.DigitalInput POWOFF;
        Crestron.Logos.SplusObjects.AnalogInput VOLLVL;
        Crestron.Logos.SplusObjects.StringOutput TX__DOLLAR__;
        private void SENDVOL (  SplusExecutionContext __context__, ushort I ) 
            { 
            CrestronString S;
            S  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 3, this );
            
            
            __context__.SourceCodeLine = 15;
            S  .UpdateValue ( Functions.ItoA (  (int) ( I ) )  ) ; 
            __context__.SourceCodeLine = 17;
            
                {
                int __SPLS_TMPVAR__SWTCH_1__ = ((int)Functions.Length( S ));
                
                    { 
                    if  ( Functions.TestForTrue  (  ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) ) ) ) 
                        { 
                        __context__.SourceCodeLine = 19;
                        MakeString ( TX__DOLLAR__ , "\u0002VOL:00{0}\u0003", S ) ; 
                        } 
                    
                    else if  ( Functions.TestForTrue  (  ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) ) ) ) 
                        { 
                        __context__.SourceCodeLine = 22;
                        MakeString ( TX__DOLLAR__ , "\u0002VOL:0{0}\u0003", S ) ; 
                        } 
                    
                    else if  ( Functions.TestForTrue  (  ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) ) ) ) 
                        { 
                        __context__.SourceCodeLine = 25;
                        MakeString ( TX__DOLLAR__ , "\u0002VOL:{0}\u0003", S ) ; 
                        } 
                    
                    } 
                    
                }
                
            
            
            }
            
        object POWON_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 31;
                MakeString ( TX__DOLLAR__ , "\u0002PWD:1\u0003") ; 
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object POWOFF_OnPush_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 35;
            MakeString ( TX__DOLLAR__ , "\u0002PWD:0\u0003") ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    
object VOLLVL_OnChange_2 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 39;
        SENDVOL (  __context__ , (ushort)( VOLLVL  .UshortValue )) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

public override object FunctionMain (  object __obj__ ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusFunctionMainStartCode();
        
        __context__.SourceCodeLine = 44;
        WaitForInitializationComplete ( ) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler(); }
    return __obj__;
    }
    

public override void LogosSplusInitialize()
{
    _SplusNVRAM = new SplusNVRAM( this );
    
    POWON = new Crestron.Logos.SplusObjects.DigitalInput( POWON__DigitalInput__, this );
    m_DigitalInputList.Add( POWON__DigitalInput__, POWON );
    
    POWOFF = new Crestron.Logos.SplusObjects.DigitalInput( POWOFF__DigitalInput__, this );
    m_DigitalInputList.Add( POWOFF__DigitalInput__, POWOFF );
    
    VOLLVL = new Crestron.Logos.SplusObjects.AnalogInput( VOLLVL__AnalogSerialInput__, this );
    m_AnalogInputList.Add( VOLLVL__AnalogSerialInput__, VOLLVL );
    
    TX__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( TX__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( TX__DOLLAR____AnalogSerialOutput__, TX__DOLLAR__ );
    
    
    POWON.OnDigitalPush.Add( new InputChangeHandlerWrapper( POWON_OnPush_0, false ) );
    POWOFF.OnDigitalPush.Add( new InputChangeHandlerWrapper( POWOFF_OnPush_1, false ) );
    VOLLVL.OnAnalogChange.Add( new InputChangeHandlerWrapper( VOLLVL_OnChange_2, true ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_VILLAGE13___SEURASTORM_V1_00 ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint POWON__DigitalInput__ = 0;
const uint POWOFF__DigitalInput__ = 1;
const uint VOLLVL__AnalogSerialInput__ = 0;
const uint TX__DOLLAR____AnalogSerialOutput__ = 0;

[SplusStructAttribute(-1, true, false)]
public class SplusNVRAM : SplusStructureBase
{

    public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
    
    
}

SplusNVRAM _SplusNVRAM = null;

public class __CEvent__ : CEvent
{
    public __CEvent__() {}
    public void Close() { base.Close(); }
    public int Reset() { return base.Reset() ? 1 : 0; }
    public int Set() { return base.Set() ? 1 : 0; }
    public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
}
public class __CMutex__ : CMutex
{
    public __CMutex__() {}
    public void Close() { base.Close(); }
    public void ReleaseMutex() { base.ReleaseMutex(); }
    public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
}
 public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
