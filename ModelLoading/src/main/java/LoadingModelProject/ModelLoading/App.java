package LoadingModelProject.ModelLoading;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.URL;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.datavec.api.records.reader.RecordReader;
import org.datavec.api.records.reader.impl.csv.CSVRecordReader;
import org.datavec.api.split.FileSplit;
import org.datavec.api.transform.schema.Schema;
import org.datavec.api.util.ndarray.RecordConverter;
import org.datavec.api.writable.Writable;
import org.deeplearning4j.datasets.datavec.RecordReaderDataSetIterator;
import org.deeplearning4j.nn.multilayer.MultiLayerNetwork;
import org.deeplearning4j.util.ModelSerializer;
import org.nd4j.linalg.api.ndarray.INDArray;
import org.nd4j.linalg.dataset.api.iterator.DataSetIterator;
import org.nd4j.linalg.dataset.api.preprocessor.DataNormalization;
import org.nd4j.linalg.dataset.api.preprocessor.NormalizerStandardize;
import org.nd4j.linalg.factory.Nd4j;
import org.nd4j.linalg.io.ClassPathResource;
import org.nd4j.linalg.dataset.DataSet;
/**
 * Hello world!
 *
 */
public class App 
{
	
	
	public static  File readfromFile() {
	    URL is = App.class.getClass().getClassLoader().getResource("model.bin");
	    
	    File out =new File(is.getPath());
	    return out;
	}
	
	public static  String predict(double f0, double f1, double f2, double f3) {

    	File modelSave;
		try {
			modelSave = new File("model.bin");//new ClassPathResource("model.bin").getFile();
	    	//MultiLayerNetwork model = ModelSerializer.restoreMultiLayerNetwork(readfromFile());
	    	
	    	MultiLayerNetwork model = ModelSerializer.restoreMultiLayerNetwork(modelSave);
            
            double[] arr = new double[] {f0,  f1,  f2,  f3};

            INDArray data = Nd4j.create(arr);

	    	
	    	int[] labelIndices = model.predict(data); 
	    	
	    	INDArray result = model.output(data, false) ;
	    	
	    	
	    	for(int i: labelIndices) {
	    		//System.out.println("Classe Number : "+ i);
	    		//System.out.println("Probability : "+ result.getDouble(i));
	    		
	    		return String.valueOf(i);
	    		
	    	}	
            
	    
	    	
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return "-1";
	}
	
    private static final int CLASSES_COUNT = 3;
    private static final int FEATURES_COUNT = 4;
    
    public static void main( String[] args ) 
    {
    	
    	String str =predict(Double.parseDouble(args[0]),  Double.parseDouble(args[1]),  Double.parseDouble(args[2]),  Double.parseDouble(args[3]));
    	System.out.println( str );
    	
    	/*
    	File modelSave;
		try {
			modelSave = new ClassPathResource("model.bin").getFile();
	    	MultiLayerNetwork model = ModelSerializer.restoreMultiLayerNetwork(modelSave);
	    	
	    	      
            
            double[] arr = new double[] {5.1,  3.5,  1.4,  0.2};

            INDArray data = Nd4j.create(arr);

	    	
	    	int[] labelIndices = model.predict(data); 
	    	
	    	INDArray result = model.output(data, false) ;
	    	
	    	
	    	for(int i: labelIndices) {
	    		System.out.println("Classe Number : "+ i);
	    		System.out.println("Probability : "+ result.getDouble(i));
	    	}
	    	
	    	
	    	

	    			
	    	
	    		
	    	
            
	    
	    	
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
*/
    }
}
