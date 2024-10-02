import java.awt.*;
import javax.swing.*;

public class SimpleWindowApp {
    
    public static void main(String[] args) {
        javax.swing.SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                createAndShowGUI();
            }
        });
    }

    private static void createAndShowGUI() {
        
        JFrame frame = new JFrame("Somma di Due Numeri");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new GridLayout(5, 2, 10, 10));

        // Imposta una dimensione predefinita per il frame
        frame.setSize(400, 300);

        JLabel label1 = new JLabel("Primo numero:");
        JLabel label2 = new JLabel("Secondo numero:");
        Font font = new Font("Arial", Font.BOLD, 16);
        label1.setFont(font);
        label2.setFont(font);

        JTextField textField1 = new JTextField(10);
        JTextField textField2 = new JTextField(10);
        textField1.setFont(font);
        textField2.setFont(font);
        textField1.setPreferredSize(new Dimension(200, 40));
        textField2.setPreferredSize(new Dimension(200, 40));

        JButton sumButton = new JButton("Somma");
        sumButton.setFont(font);
        sumButton.setPreferredSize(new Dimension(150, 40));

        sumButton.addActionListener(e -> {
            try {
                int numero1 = Integer.parseInt(textField1.getText());
                int numero2 = Integer.parseInt(textField2.getText());
                int somma = numero1 + numero2;
                JOptionPane.showMessageDialog(frame, "La somma è: " + somma);
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(frame, "Per favore, inserisci numeri validi in entrambi i campi.");
            }
        });

        frame.add(label1);
        frame.add(textField1);
        frame.add(label2);
        frame.add(textField2);
        frame.add(sumButton);

        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }
}